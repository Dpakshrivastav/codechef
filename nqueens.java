import java.util.*;

class NQueen
{
	// N x N chessboard
	
	public static Scanner sc = new Scanner(System.in);
	

	// Function to check if two queens threaten each other or not
	private static boolean isSafe(char mat[][], int r, int c, int N)
	{
		// return false if two queens share the same column
		for (int i = 0; i < r; i++)
			if (mat[i][c] == 'Q')
				return false;

		// return false if two queens share the same \ diagonal
		for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
			if (mat[i][j] == 'Q')
				return false;

		// return false if two queens share the same / diagonal
		for (int i = r, j = c; i >= 0 && j < N; i--, j++)
			if (mat[i][j] == 'Q')
				return false;

		return true;
	}

	private static void nQueen(char mat[][], int r, int N)
	{
		if (r == N)
		{
			System.out.print("[");
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++){
					if(mat[i][j]=='Q'){
						System.out.print((j+1)+" ");
					}
				}
				
			}
			System.out.print("] ");

			return;
		}

		for (int i = 0; i < N; i++)
		{
			if (isSafe(mat, r, i, N))
			{
				mat[r][i] = 'Q';
				nQueen(mat, r + 1, N);

				mat[r][i] = '-';
			}
		}
	}
	public static void main(String[] args) {
		// Scanner sc = new Scanner(System.in);
		int t=0;
		t = sc.nextInt();
		while(t!=0){
			solve();
			System.out.println();
			t--;
		}
	}
	public static void solve()
	{
		// mat[][] keeps track of position of Queens in
		// the current configuration
		int N=0;
		N = sc.nextInt();
		char[][] mat = new char[N][N];
		if(N<1||N==2||N==3){
			System.out.println(-1);
			return;
		}
		// initialize mat[][] by '-'
		for (int i = 0; i < N; i++) {
			Arrays.fill(mat[i], '-');
		}

		nQueen(mat, 0, N);
	}
}	
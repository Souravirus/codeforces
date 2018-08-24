#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;
int Sx, Sy, Ex, Ey, currX, currY, n, m;
char maze[51][51];
int debug = 0;

int mover(int dir){
    if(dir == 0){
        currY = currY-1;
    }

    if(dir == 1){
        currY +=1;
    }

    if(dir == 2){
        currX-=1;
    }

    if(dir == 3){
        currX+=1;
    }
    dout << "currX:" << currX << " currY:" << currY << endl;
    if(currX < 0 || currY < 0 || currX >= n || currY >= m)
        return -1;
    if(maze[currX][currY] == '#')
        return -1;
    if(maze[currX][currY] == 'E')
        return 1;
    return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> maze[i][j];
            if(maze[i][j] == 'S'){
                Sx = i;
                Sy = j;
            }

            if(maze[i][j] == 'E'){
                Ex = i;
                Ey = j;
            }
        }
    }

    
    dout << "currX" << currX << endl;
    dout << "currY" << currY << endl;
    string inst;
    int count = 0;
    cin >> inst;
    int directions[4] = {0};

    for(int i = 0; i < 4; i++){
        directions[i] = 1;
        dout << "i:" << i << endl;

        for(int j = 0; j < 4; j++){
            if(directions[j] == 0){
                dout << "j:" << j << endl;
                directions[j] = 1;

                for(int k = 0; k < 4; k++){
                    if(directions[k] == 0){
                        dout << "k:" << k << endl;
                        directions[k] = 1;

                        for(int l = 0; l < 4; l++){
                            if(directions[l] == 0){
                                currX = Sx;
                                currY = Sy;
                                dout << "l:" << l << endl;
                                directions[l] = 1;
                                for(int m= 0; m < inst.length(); m++){
                                    int decision;
                                    dout << "inst[m]:" << inst[m] << endl;
                                    dout << "for" << i << j << k << l << endl;
                                    if(inst[m] == '0'){
                                        dout << "going in i" << endl;
                                         decision = mover(i); 
                                    }

                                    if(inst[m] == '1'){
                                        dout << "going in j" << endl;
                                        decision = mover(j);                                        
                                    }

                                    if(inst[m] == '2'){
                                        dout << "going in k" << endl;
                                        decision = mover(k);
                                    }

                                    if(inst[m] == '3'){
                                        dout << "going in l" << endl;
                                        decision = mover(l);
                                    }
                                    dout << "decision" << decision << endl;

                                    if(decision == -1){
                                        dout << "it failed" << endl;
                                        break;
                                    }

                                    if(decision == 1){
                                        dout << "it passed" << endl;
                                        count++;
                                        break;
                                    }
                                }
                                directions[l] = 0;
                            }
                        }
                        directions[k] = 0;
                    }
                }

                directions[j] = 0;
            }
        }
        directions[i] = 0;
    }

    cout << count << endl;

	return 0;
}

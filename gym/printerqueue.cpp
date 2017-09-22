#include<bits/stdc++.h>
using namespace std;
int main(){
	int T, n, m, pos=0, j[100], ind, mark, num, size;
	cin>>T;
	while(T--){
		cin>>n>>m;
		size=0;
		pos=0;
		map<int, set<int> > mymap;
		map<int, set<int> >::iterator itm;
		map<int, set<int> >::iterator itmc;
		for(int i=0;i<n;i++){
			cin>>j[i];
			if(m==i){
				num=j[i];
			}
			itm=mymap.find(j[i]);
			if(itm==mymap.end()){
				set<int> s;
				s.insert(i);
				mymap.insert(pair<int, set<int> >(j[i], s));
			}
			else{
				itm->second.insert(i);
			}
		}
//		cout<<"i exited first loop"<<endl;
		itmc=mymap.find(num);
		itm=mymap.end();
		itm--;
		int dis=distance(itmc, itm);
		int flag=0;
		int i=0;
		map<int, set<int> >::reverse_iterator itm1;
		//cout<<"dis"<<dis<<endl;


		for(itm1=mymap.rbegin(); itm1!=mymap.rend(); itm1++)
		{
			
			//for(set<int>::iterator its2=itm1->second.begin();its2!=itm1->second.end();its2++)
				//cout<<*its2<<" ";
			//cout<<"i entered second loop"<<endl;
			if(i!=dis){
				//cout<<"Entered the first if"<<endl;
				set<int> :: iterator its;
				if(flag==0){
					its=itm1->second.end();
					its--;
					pos=*its;
						flag=1;
					//	cout<<"pos in first if"<<pos<<endl;
						size+=itm1->second.size();
						//cout<<"size:"<<size<<endl;
				}
				else{
					its=itm1->second.lower_bound(pos);
					//cout<<"*its"<<*its<<endl;
					//cout<<"size of set"<<itm1->second.size()<<endl;
					if(its==itm1->second.begin())
					{
						//cout<<"begin came"<<endl;
						its=itm1->second.end();
					}
					its--;
					pos=*its;
					size+=itm1->second.size();
					//cout<<"pos in first els"<<pos<<endl;
						//cout<<"size:"<<size<<endl;
				}
			}
			else{
				//cout<<"Entered else"<<endl;
				set<int> ::iterator its;
				set<int> ::iterator its1;
				its=itm1->second.find(m);
				its1=itm1->second.lower_bound(pos);
				//cout<<"*its1"<<*its1<<endl;
				if(its1==itm1->second.end()){
					its1=itm1->second.begin();
					//cout<<"changed to begin"<<endl;
				}
				pos=*its1;
				//cout<<"pos"<<pos<<endl;
				if(m>=pos){
					//cout<<"mposition"<<endl;
					size+=distance(its1, its);
					size++;
						//cout<<"size:"<<size<<endl;
				}
				else if(m<pos){
					//cout<<"oposition"<<endl;
					size+=distance(its1, itm1->second.end());
					size+=distance(itm1->second.begin(), its);
					size++;
						//cout<<"size:"<<size<<endl;
				}
				break;
			}
			i++;
		}
		cout<<size<<endl;
	}

	return 0;
}

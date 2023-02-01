#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
   string s, s1;
    cin>>s;
    //cout<<s<<endl;

    int i, j, l=s.size();

    cout<<l<<endl<<endl;

    for(i=0, j=0; j<l; i++, j=j+2){
        s1[i]=s[j];
        cout<<s1[i]<<endl;

    }
    cout<<s1[0];
    int l2=s1.size();
    cout<<l2;

    //sort(s1,s1+l1);

    //for(i=0; i<l1; i++)
        cout<<s1[i]<<"+ ";



    return 0;
}

/*
int main()
{
    string s, ss;
    cin>>s;
    cout<<s;

    int l, i;
    l=s.size();
    cout<<endl<<l<<endl;
    //  '\n'
    for(i=0;i<l;i++)
        ss[i]=s[i+i];

    l=ss.size();
    cout<<endl<<l<<endl;

    for(i=0;i<l;i++)
        cout<<ss[i]<<" ";
}

*/
int main()
{
    string s;
    int arr[100], count=0, i;
    int j=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]!='+')
        {
            arr[j] = s[i]-'0';
            //cout<<arr[j]<<" ";
            count++;
           // cout<<count<<endl;
            j++;
        }

    }
    // 3 + 2 + 9
    // 0 1 2 3 4
    // arr[0]=3
    // arr[1]= '
    // arr
    sort(arr,arr+count);

    for(int i=0;i<count;i++){
        if(i<count-1){
            cout<<arr[i]<< "+";
        }
        else{
            cout<<arr[i];
        }
    }

}
/*
int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}

*/

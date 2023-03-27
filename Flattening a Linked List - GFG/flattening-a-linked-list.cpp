//{ Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}

// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    Node*merge(Node*root1,Node*root2){
        if(root1==NULL){
            return root2;
        }
        if(root2==NULL){
            return root1;
        }
        
        Node*ans=NULL;
        Node*tail=ans;
        while(root1!=NULL&&root2!=NULL){
            if(root1->data<root2->data){
                if(tail==NULL){
                    ans=root1;
                    tail=ans;
                    root1=root1->bottom;
                }else{
                    tail->bottom=root1;
                    tail=root1;
                    root1=root1->bottom;
                    
                }
            }else{
                if(tail==NULL){
                    ans=root2;
                    tail=ans;
                    root2=root2->bottom;
                }else{
                    tail->bottom=root2;
                    tail=root2;
                    root2=root2->bottom;
                    
                }
                
            }
        }
         while(root1!=NULL){
            
                if(tail==NULL){
                    ans=root1;
                    tail=ans;
                    root1=root1->bottom;
                }else{
                    tail->bottom=root1;
                    tail=root1;
                    root1=root1->bottom;
                    
                }
            
        }
         while(root2!=NULL){
          
                if(tail==NULL){
                    ans=root2;
                    tail=ans;
                    root2=root2->bottom;
                }else{
                    tail->bottom=root2;
                    tail=root2;
                    root2=root2->bottom;
                    
                }
                
            
        }
        return ans;
    }
Node *flatten(Node *root)
{
    if(root==NULL||root->next==NULL){
        return root;
    }
    
   Node*temp= flatten(root->next);
    
  return   merge(root,temp);
   // Your code here
}

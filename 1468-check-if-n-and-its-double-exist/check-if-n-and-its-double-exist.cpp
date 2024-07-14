/*class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr.size(); j++ ){
                if(arr[i]==arr[j]*2 && i!=j){
                    return true;
                }
            }
        }
        return false;
    }

        unordered_map<int, int> hash;
        
        for(int i=0; i<arr.size(); i++){
            hash[arr[i]*2]=arr[i];
        }
        for(int i=0; i<arr.size(); i++){
            auto it = hash.find(arr[i]);
            if (it != hash.end()) {
                return true;
            }
        }
        return false;  
        
         
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            if(mp.find(arr[i] * 2) != mp.end())
                return true;
            if(arr[i] % 2 == 0 && mp.find(arr[i]/2) != mp.end())
                return true;
            mp[arr[i]]++;
        }
        return false;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
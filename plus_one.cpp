vector<int> increment(vector<int> arr ,int N) {
        int index = N-1;
        while(index>=0){
            if(arr[index] == 9){
                arr[index] = 0;
            }
            else{
                arr[index] = arr[index] + 1;
                return arr;
            }
            index--;
            
        }
        arr.insert(arr.begin(),1);
        return arr;
    }

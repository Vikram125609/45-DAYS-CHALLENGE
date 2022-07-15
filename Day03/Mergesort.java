package Day03;

public class Mergesort {
    public static void conquere(int[] array,int first,int last)
    {
        int mid = (first + last) / 2;
        int length1 = mid - first + 1;
        int length2 = last - mid;
        int mainIndexArray = first;
        int array1[] = new int[length1];
        int array2[] = new int[length2];
        for(int i = 0;i < length1;i++)
        {
            array1[i] = array[mainIndexArray++];
        }
        for(int i = 0;i < length2;i++)
        {
            array2[i] = array[mainIndexArray++];
        }
        int i = 0;
        int j = 0;
        mainIndexArray = first;
        while(i < length1 && j < length2)
        {
            if(array1[i] <= array2[j])
                array[mainIndexArray++] = array1[i++];
            else
                array[mainIndexArray++] = array2[j++];
        }
        while(i < length1)
        {
            array[mainIndexArray++] = array1[i++];
        }
        while(j < length2)
        {
            array[mainIndexArray++] = array2[j++];
        }
    }
    public static void divide(int[] array,int first,int last)
    {
        if(first >= last)
        {
            return;
        }
        int mid = (first + last) / 2;
        divide(array, first, mid);
        divide(array, mid + 1, last); 
        conquere(array, first, last);
    }
    public static void main(String[] args) {
        int[] array = {5,4,3,2,1};
        divide(array, 0, 4);
        for(int i = 0; i < array.length;i++)
        {
            System.out.println(array[i]);
        }
    }
}
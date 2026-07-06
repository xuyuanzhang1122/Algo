/**
 * 本文件不引用任何头文件
 * 不涉及可编译
 */
/*删除数组元素*/

void removerItem(int *nums, int size, int index){
    for(int i = index; i < size - 1; i++){
        nums[i] = nums[i + 1];
    }
}
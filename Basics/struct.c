struct Point {   //This is useful to return multiple related values
    int x , y;
};
struct Point get_Point(){
    struct Point p = {1,2};  //p is an object of the structure Point
    
    return p;
}
void show_point(struct Point p){
    printf("\n%d\t%d", p.x ,p.y);
}

int main(){
    struct Point x = get_Point();
    show_point(x);
}
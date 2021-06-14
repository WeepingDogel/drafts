/*
标准体重计算器
By WeepingDogel

世卫计算方法
男性：(身高cm－80)×70﹪=标准体重
女性：(身高cm－70)×60﹪=标准体重
标准体重正负10﹪为正常体重
标准体重正负10﹪~ 20﹪为体重过重或过轻
标准体重正负20﹪以上为肥胖或体重不足
超重计算公式
超重%=[（实际体重－理想体重）/（理想体重）]×100%
*/
/*导入标准库stdio.h （必须）指令集*/
#include <stdio.h>
/*标准体重*/
int weight;
/*声明函数*/
float judge(float parameter1,float parameter2);
float Count_M(float parameter);
float Count_F(float parameter);
/*声明主函数main() (这个都不写，那写个屁)*/
int main()
{
    printf("欢迎使用.");
    /*身高*/
    int height;
    /*声明变量sex表示性别*/
    char sex;
    /*声明变量：实际体重*/
    int real_weight;
    /*提示用户输入性别*/
    printf("请输入你的性别\n（M为男性,F为女性,注意大小写）");
    printf("\n\n:");
    /*读取用户输入的数据并赋值给sex*/
    scanf("%c",&sex);
    /*进入判断，并判断变量sex的值是否为M*/
    if(sex == 'M')
    {
        /*当变量sex=M时，判断为男性，将执行以下代码*/
        printf("你是男性");
        printf("输入你的身高(单位:厘米)");
        printf("\n\n:");
        scanf("%d",&height);
        weight = (int) Count_M((float) height);
        printf("你的身高对应的标准体重为%dkg\n",weight);
        printf("请输入你的实际体重(单位:kg)");
        printf("\n:");
        scanf("%d",&real_weight);
        judge((float) real_weight,(float) weight);
    }
    /*进入判断，并判断变量sex的值是否为F*/
    else if(sex == 'F')
    {
        /*当变量sex=F时，判断为女性，将执行以下代码*/
        printf("你是女性");
        printf("输入你的身高(单位:厘米)");
        printf("\n\n:");
        scanf("%d",&height);
        weight = (int) Count_F((float) height);
        printf("你的身高对应的标准体重为%dkg\n",weight);
        printf("请输入你的实际体重(单位:kg)");
        printf("\n:");
        scanf("%d",&real_weight);
        judge((float) real_weight,(float) weight);
    }
    return 0;
}
/*计算出男性标准体重*/
float Count_M(float parameter)
{
    /*男性：(身高cm－80)×70﹪=标准体重*/
    /*定义变量:结果*/
    float result;
    result = (int)(parameter - 80.0) * 0.7;

    return result;
}
/*计算出女性标准体重*/
float Count_F(float parameter)
{
    /*女性：(身高cm－70)×60﹪=标准体重*/
    /*定义变量:结果*/
    float result;
    result = (int)(parameter - 70.0) * 0.6;

    return result;
}
/*检测实际体重是否符合标准*/
float judge(float parameter1,float parameter2)
{
    /*标准体重正负10﹪为正常体重*/
    if(parameter1 <= parameter2 + parameter2 * 0.1 && parameter1 >= parameter2 - parameter2 * 0.1)
    {
        printf("你的体重符合正常标准");
    }
    /*标准体重正负10﹪~ 20﹪为体重过重或过轻*/
    else if(parameter1 >= parameter2 + parameter2 * 0.1 && parameter1 <= parameter2 + parameter2 * 0.2)
    {
        printf("你的体重过重");
    }
    /*标准体重正负10﹪~ 20﹪为体重过重或过轻*/
    else if(parameter1 <= parameter2 - parameter2 * 0.1 && parameter1 >= parameter2 - parameter2 * 0.2)
    {
        printf("你的体重过轻");
    }
    /*标准体重正负20﹪以上为肥胖或体重不足*/
    else if(parameter1 > parameter2 + parameter2 * 0.2)
    {
        printf("你太胖了。");
    }
    /*标准体重正负20﹪以上为肥胖或体重不足*/
    else if(parameter1 < parameter2 - parameter2 * 0.2)
    {
        printf("你太瘦了。");
    }
    return 0;
}
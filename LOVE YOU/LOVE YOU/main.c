#include <stdio.h>

int main(void)
{
    FILE *indata = fopen("/Users/ada/Desktop/message.html","w");
    
    if(indata==NULL)
    {
        printf("Error\n");
        return 1;
    }
    
    fprintf(indata,
            "<!DOCTYPE html>"

                    "<html>"

                    "<head>"

                    "<meta charset='utf-8'>"

                    "<title>一封信</title>"

                    "<style>"

                    "body{"

                    "background:#fdfcf8;"

                    "margin:60px auto;"

                    "max-width:800px;"

                    "padding:40px;"

                    "font-size:24px;"

                    "line-height:1.8;"

                    "font-family:Georgia, serif;"

                    "color:#333;"

                    "}"

                    "h2{"

                    "font-weight:normal;"

                    "}"

                    ".signature{"

                    "text-align:right;"

                    "margin-top:50px;"

                    "}"

                    "</style>"

                    "</head>"

                    "<body>"

                    "<h2>To Tinghua：</h2>"

                    "<p>"

                    "&nbsp;&nbsp;&nbsp;&nbsp;展信佳。"

                    "</p>"

                    "<p>"

                    "&nbsp;&nbsp;&nbsp;&nbsp;其实我知道你昨天什么时候放的信）不过我突然有了一个小巧思，所以现在才回复你）"

                    "</p>"

                    "<p>"

                    "&nbsp;&nbsp;&nbsp;&nbsp;我看完你的信后真的很感动。其实有很多小细节我自己都记不得了但是你却记得很清楚😭"

                    "我想说的是，你真的是一个很好很好的女生，人总是会默默忽略自己的优点，而我所做的其实只是让你注意到它们。我真的很开心认识你！如果你想要找我或者需要我帮忙请尽管发消息！"

                    "</p>"

                    "<p>"

                    "&nbsp;&nbsp;&nbsp;&nbsp;无论此刻的你在做什么，"

                    "都愿你能够开心幸福。"

                    "</p>"

                    "<div class='signature'>"

                    "—— Siyi"

                    "</div>"

                    "</body>"

                    "</html>"
            );
    fclose(indata);
    
    return 0;
}

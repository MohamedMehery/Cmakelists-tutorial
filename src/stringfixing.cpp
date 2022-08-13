#include <stdio.h>
#include <string.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

/**
 * @brief this code take string like "feed-the dog/and@water the plant"
 *                            return "FeedTheDogAndWaterThePlant"
 * @return void 
 */
class string_man{
    public:

    virtual int ischar(char c)
    {
        if ( c >= 'A' && c <= 'Z')
        {
            return 1;
        }
        else if( c >= 'a' && c <= 'z' )
        {
            return 1;
        }
        else
            return 0;
    }


    virtual void stringfix(char * str)
    {
        int j = 0;
        str[0] -= (int)('a' - 'A');
        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            if(ischar(str[i]))
            {
                str[j++] = str[i];
            }
            else
            {
                str[i+1] -= (int)('a' - 'A');
            }
        }
        str[j] = 0;

        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            if(!((i+1)%3))
            {
                str[i] = 'X';
            }
        }

        printf("\t%s\n",str);
    }

};

class classtest : public ::testing::Test
{
    public:
        string_man *  stm;
        void SetUp()
        {
            stm = new (string_man);

        }
        void TearDown()
        {
            delete stm;
        }
};

class Mockstr : public string_man
{
    public:
        MOCK_METHOD1( stringfix , void(char * str) );
};


TEST_F(classtest , teststring)
{
    char str[50]="feed-the dog/and@water the plant"; 
    stm->stringfix(str);
    EXPECT_STREQ(str, "FeXdTXeDXgAXdWXteXThXPlXnt" );
}

TEST(calltest , calltest)
{
    //Arrang
    string_man stm;
    Mockstr ms;
    char str [] = "feed-the dog/and@water the plant"; 
    EXPECT_CALL(ms , stringfix(str))
    .Times(::testing::AtLeast(1))
    .WillRepeatedly( ::testing::Invoke( &stm , &string_man::stringfix));

    //ACT
    ms.stringfix(str);

    //Assert
    EXPECT_STREQ(str, "FeXdTXeDXgAXdWXteXThXPlXnt" );
}

int main(int argc , char** argv)
{
    ::testing::InitGoogleTest(&argc , argv);
    // scanf("%s" , str);
    // printf("You entered \"%s\" \n" , str);
    return RUN_ALL_TESTS();
}
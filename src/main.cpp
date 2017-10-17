#include <iostream>
#include "../lib/SMTPClientSession.h"
using namespace std;

int main()
{
    MailMessage msg;
    msg.addRecipient(MailRecipient(MailRecipient::PRIMARY_RECIPIENT, "16506607798@tmomail.com", "Kevin"));
    msg.setSender("Me <kevinpranoto97@gmail.com>");
    msg.setSubject("Subject");
    msg.setContent("Content");

    SMTPClientSession smtp("
}

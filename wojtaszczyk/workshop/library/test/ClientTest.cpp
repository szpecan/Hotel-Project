#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Address.h"

struct TestSuiteClientFixture {
    const std::string testFirstName = "Jon";
    const std::string testLastName = "Arbuckle";
    const std::string testPersonalID = "0123456789";
    Address *testaddress1;
    Address *testaddress2;

    TestSuiteClientFixture() {
        testaddress1 = new Address("London", "Accacia Avenue", "22");
        testaddress2 = new Address("London", "Rue Morgue", "13");
    }

    ~TestSuiteClientFixture() {
        delete testaddress1;
        delete testaddress2;
    }

};

BOOST_FIXTURE_TEST_SUITE(TestSuiteClient, TestSuiteClientFixture)

    BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {

        Client c(testFirstName, testLastName, testPersonalID, testaddress1);
        BOOST_TEST(c.getClientFirstName().compare(testFirstName ) == 0);
        BOOST_TEST(c.getClientLastName().compare(testLastName) == 0);
        BOOST_TEST(c.getClientPersonalID().compare(testPersonalID) == 0);
        BOOST_TEST(testaddress1 == c.getClientAddress());
        BOOST_TEST(c.getClient_RentNumber() == 0);
    }
    BOOST_AUTO_TEST_CASE(ClientSetterTests){
        Client c(testFirstName, testLastName, testPersonalID, testaddress1);
        Address* pusty=NULL;
        c.setClientFirstName("Abraham");
        c.setClientLastName("Gold");
        c.setClientAddress(testaddress2);
        BOOST_TEST(c.getClientFirstName().compare("Abraham") == 0);
        BOOST_TEST(c.getClientLastName().compare("Gold") == 0);
        BOOST_TEST(testaddress2== c.getClientAddress());
        c.setClientFirstName(" ");
        c.setClientLastName(" ");
        c.setClientAddress(pusty);
        BOOST_TEST(c.getClientFirstName().compare("Abraham") == 0);
        BOOST_TEST(c.getClientLastName().compare("Gold") == 0);
        BOOST_TEST(testaddress2 == c.getClientAddress());
    }

BOOST_AUTO_TEST_SUITE_END()


























create table bokcnfaf
(
bkcfadmn    char(8),
bkcfpcpw    char(40),
bkcfrelp    char(10),
bkcfpdtc    char(1),
bkcfuiba    char(1),
bkcfuhas    char(1),
bkcfodcf    char(1),
bkcfatcf    char(1),
bkcffitm    char(1),
bkcfcanc    char(1),
bkcfrcan    char(3),
bkcfaill    char(1),
bkcfareg    char(3),
bkcfcpox    char(1),
bkcfcreg    char(3),
bkcfvdot    char(1),
bkcfvreg    char(3),
bkcfhcon    char(1),
bkcfcspc    char(127),
bkcfrlmh    char(1),
bkcfmhas    char(1),
bkcfmhsp    char(127),
bkcfmque    char(1),
bkcfmreg    char(3),
bkcfmqsp    char(127),
bkcfallg    char(1),
bkcfahas    char(1),
bkcfalsp    char(127),
bkcflclt    char(1),
bkcffsat    char(1),
bkcfovrn    char(1),
bkcfwtim    char(1),
bkcfdadp    char(1),
bkcfcntn    char(20),
bkcfpark    char(1),
bkcfcnst    char(3),
bkcfwebc    char(10),
bkcfcdat    char(8),
bkcfctim    char(8),
bkcfwebu    char(10),
bkcfudat    char(8),
bkcfutim    char(8),
bkcfspar    char(50),
lf          char(1)
);
create unique index bokcnfa1 on bokcnfaf
(
bkcfadmn
);
revoke all on bokcnfaf from public ; 
grant select on bokcnfaf to public ; 

create table patsgcaf
(
ptsgfund    char(6),
ptsgmbs     char(9),
ptsgclss    char(3),
ptsgclmn    char(3),
ptsgspar    char(17),
lf          char(1)
);
create unique index patsgca1 on patsgcaf
(
ptsgclmn,
ptsgfund,
ptsgmbs
);
revoke all on patsgcaf from public ; 
grant select on patsgcaf to public ; 

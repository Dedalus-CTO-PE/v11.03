create table pricmntf
(
prcmdebt    char(8),
dprcmscn    char(2),
dprcmlno    char(3),
prcmline    char(70),
lf          char(1)
);
create unique index pricmnt1 on pricmntf
(
prcmdebt,
dprcmscn,
dprcmlno
);
revoke all on pricmntf from public ; 
grant select on pricmntf to public ; 

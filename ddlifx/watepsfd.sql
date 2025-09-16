create table watepsaf
(
wtepeid     char(4),
wtepurn     char(8),
wteppro     char(9),
wtepcnt     char(2),
wteplev1    char(10),
wteplev2    char(10),
wteplev3    char(10),
wteplev4    char(10),
wtepanl1    decimal(16,4),
wtepanl2    decimal(16,4),
wtepanl3    decimal(16,4),
wtepdel     char(1),
wtepspa     char(20),
lf          char(1)
);
create unique index watepsa1 on watepsaf
(
wtepeid,
wtepurn,
wteppro,
wtepcnt
);
create unique index watepsa2 on watepsaf
(
wteplev1,
wteplev2,
wteplev3,
wteplev4,
wtepeid,
wtepurn,
wteppro,
wtepcnt
);
revoke all on watepsaf from public ; 
grant select on watepsaf to public ; 

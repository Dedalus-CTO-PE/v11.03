create table patcanaf
(
ptcccode    char(9),
ptcclatr    decimal(1,0),
ptccspar    char(30),
lf          char(1)
);
create unique index patcana1 on patcanaf
(
ptcccode
);
revoke all on patcanaf from public ; 
grant select on patcanaf to public ; 

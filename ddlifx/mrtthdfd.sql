create table mrtthdaf
(
mrthtmid    char(4),
mrthdesc    char(35),
mrthactv    char(1),
mrthspar    char(80),
lf          char(1)
);
create unique index mrtthdr1 on mrtthdaf
(
mrthtmid
);
revoke all on mrtthdaf from public ; 
grant select on mrtthdaf to public ; 

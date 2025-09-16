create table webpasaf
(
wbpauid     char(10),
wbpapas1    char(10),
wbpapas2    char(10),
wbpapas3    char(10),
wbpapas4    char(10),
wbpapas5    char(10),
wbpaspar    char(80),
lf          char(1)
);
create unique index webpasa1 on webpasaf
(
wbpauid
);
revoke all on webpasaf from public ; 
grant select on webpasaf to public ; 

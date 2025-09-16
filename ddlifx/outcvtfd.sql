create table outcvtaf
(
  ocvtsite    char(6) default ' ' not null,
  ocvtctyp    char(6) default ' ' not null,
  ocvtcvty    char(3) default ' ' not null,
  ocvtspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outcvta1 on outcvtaf
(
ocvtsite,
ocvtctyp,
ocvtcvty
);
revoke all on outcvtaf from public ; 
grant select on outcvtaf to public ; 

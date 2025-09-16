create table fmscodaf
(
  fmcdcaty    char(2) default ' ' not null,
  fmcdcode    char(3) default ' ' not null,
  fmcddesc    char(20) default ' ' not null,
  fmcdspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmscoda1 on fmscodaf
(
fmcdcaty,
fmcdcode
);
create unique index fmscoda2 on fmscodaf
(
fmcdcode,
fmcdcaty
);
revoke all on fmscodaf from public ; 
grant select on fmscodaf to public ; 

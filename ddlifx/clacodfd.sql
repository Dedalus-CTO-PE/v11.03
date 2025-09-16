create table clacodaf
(
  cacdcatg    char(2) default ' ' not null,
  cacdcode    char(3) default ' ' not null,
  cacddesc    char(20) default ' ' not null,
  cacdspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index clacoda1 on clacodaf
(
cacdcatg,
cacdcode
);
revoke all on clacodaf from public ; 
grant select on clacodaf to public ; 

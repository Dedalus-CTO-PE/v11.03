create table fmseptaf
(
  fmepchqa    char(15) default ' ' not null,
  fmepppid    char(3) default ' ' not null,
  fmepactv    char(1) default ' ' not null,
  fmepaddr    char(40) default ' ' not null,
  fmepport    char(5) default ' ' not null,
  fmepdesc    char(30) default ' ' not null,
  fmepcdat    char(8) default ' ' not null,
  fmepctim    char(8) default ' ' not null,
  fmepcuid    char(10) default ' ' not null,
  fmepudat    char(8) default ' ' not null,
  fmeputim    char(8) default ' ' not null,
  fmepuuid    char(10) default ' ' not null,
  fmepspar    char(109) default ' ' not null,
  lf          char(1)
);
create unique index fmsepta1 on fmseptaf
(
fmepchqa,
fmepppid
);
revoke all on fmseptaf from public ; 
grant select on fmseptaf to public ; 

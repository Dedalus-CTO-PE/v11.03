create table dismasaf
(
  dsmacode    char(9) default ' ' not null,
  dsmadesc    char(60) default ' ' not null,
  dsmasdat    char(8) default ' ' not null,
  dsmastim    char(8) default ' ' not null,
  dsmaedat    char(8) default ' ' not null,
  dsmaetim    char(8) default ' ' not null,
  dsmaaicd    char(3) default ' ' not null,
  dsmaactv    char(1) default ' ' not null,
  dsmacusr    char(10) default ' ' not null,
  dsmacdat    char(8) default ' ' not null,
  dsmactim    char(8) default ' ' not null,
  dsmauusr    char(10) default ' ' not null,
  dsmaudat    char(8) default ' ' not null,
  dsmautim    char(8) default ' ' not null,
  dsmaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index dismasa1 on dismasaf
(
dsmacode
);
revoke all on dismasaf from public ; 
grant select on dismasaf to public ; 

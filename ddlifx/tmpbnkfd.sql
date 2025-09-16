create table tmpbnkaf
(
  tmbnrecn    char(12) default ' ' not null,
  tmbntdat    char(8) default ' ' not null,
  tmbntotp    decimal(14,2) default 0 not null,
  tmbncdrw    char(6) default ' ' not null,
  tmbnmhos    char(3) default ' ' not null,
  tmbnmdhs    char(2) default ' ' not null,
  tmbnttyp    char(1) default ' ' not null,
  tmbnrcod    char(6) default ' ' not null,
  tmbnstat    char(1) default ' ' not null,
  tmbnbdat    char(8) default ' ' not null,
  tmbnbtim    char(8) default ' ' not null,
  tmbnrdat    char(8) default ' ' not null,
  tmbnrtim    char(8) default ' ' not null,
  tmbnchqa    char(15) default ' ' not null,
  tmbncdat    char(8) default ' ' not null,
  tmbnctim    char(8) default ' ' not null,
  tmbncuid    char(10) default ' ' not null,
  tmbnudat    char(8) default ' ' not null,
  tmbnutim    char(8) default ' ' not null,
  tmbnuuid    char(10) default ' ' not null,
  tmbnprin    char(1) default ' ' not null,
  tmbnprnt    char(6) default ' ' not null,
  tmbnspar    char(42) default ' ' not null,
  lf          char(1)
);
create unique index tmpbnka1 on tmpbnkaf
(
tmbnrecn
);
create unique index tmpbnka2 on tmpbnkaf
(
tmbntdat,
tmbncdrw,
tmbnrecn
);
create unique index tmpbnka3 on tmpbnkaf
(
tmbnrdat,
tmbncdrw,
tmbnrecn
);
create unique index tmpbnka4 on tmpbnkaf
(
tmbnbdat,
tmbnrdat,
tmbncdrw,
tmbnrecn
);
revoke all on tmpbnkaf from public ; 
grant select on tmpbnkaf to public ; 

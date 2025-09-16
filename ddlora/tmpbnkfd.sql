create table tmpbnkaf
(
  tmbnrecn    varchar2(12) default ' ' not null,
  tmbntdat    varchar2(8) default ' ' not null,
  tmbntotp    number(14,2) default 0 not null,
  tmbncdrw    varchar2(6) default ' ' not null,
  tmbnmhos    varchar2(3) default ' ' not null,
  tmbnmdhs    varchar2(2) default ' ' not null,
  tmbnttyp    varchar2(1) default ' ' not null,
  tmbnrcod    varchar2(6) default ' ' not null,
  tmbnstat    varchar2(1) default ' ' not null,
  tmbnbdat    varchar2(8) default ' ' not null,
  tmbnbtim    varchar2(8) default ' ' not null,
  tmbnrdat    varchar2(8) default ' ' not null,
  tmbnrtim    varchar2(8) default ' ' not null,
  tmbnchqa    varchar2(15) default ' ' not null,
  tmbncdat    varchar2(8) default ' ' not null,
  tmbnctim    varchar2(8) default ' ' not null,
  tmbncuid    varchar2(10) default ' ' not null,
  tmbnudat    varchar2(8) default ' ' not null,
  tmbnutim    varchar2(8) default ' ' not null,
  tmbnuuid    varchar2(10) default ' ' not null,
  tmbnprin    varchar2(1) default ' ' not null,
  tmbnprnt    varchar2(6) default ' ' not null,
  tmbnspar    varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpbnka1 primary key( 
tmbnrecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index tmpbnka2 on tmpbnkaf
(
tmbntdat,
tmbncdrw,
tmbnrecn
)
  tablespace pas_indx; 
create unique index tmpbnka3 on tmpbnkaf
(
tmbnrdat,
tmbncdrw,
tmbnrecn
)
  tablespace pas_indx; 
create unique index tmpbnka4 on tmpbnkaf
(
tmbnbdat,
tmbnrdat,
tmbncdrw,
tmbnrecn
)
  tablespace pas_indx; 

create table patedtaf
(
  dptetflg    varchar2(2) default ' ' not null,
  ptetpayc    varchar2(6) default ' ' not null,
  ptetadmn    varchar2(8) default ' ' not null,
  ptetinvn    varchar2(8) default ' ' not null,
  ptetbatn    varchar2(8) default ' ' not null,
  pteturno    varchar2(8) default ' ' not null,
  ptetpbat    varchar2(8) default ' ' not null,
  ptetnbat    varchar2(8) default ' ' not null,
  ptetindt    varchar2(8) default ' ' not null,
  ptetinty    varchar2(1) default ' ' not null,
  ptetexcl    varchar2(1) default ' ' not null,
  ptetccst    varchar2(2) default ' ' not null,
  ptetrcal    varchar2(1) default ' ' not null,
  ptetinam    varchar2(15) default ' ' not null,
  ptetisys    varchar2(1) default ' ' not null,
  ptetspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patedta1 primary key( 
dptetflg,
ptetadmn,
ptetinvn,
ptetbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patedta2 on patedtaf
(
ptetinvn,
ptetbatn
)
  tablespace pas_indx; 
create unique index patedta3 on patedtaf
(
ptetbatn,
ptetadmn,
ptetinvn
)
  tablespace pas_indx; 
create unique index patedta4 on patedtaf
(
ptetadmn,
ptetinvn,
ptetbatn
)
  tablespace pas_indx; 
create unique index patedta5 on patedtaf
(
pteturno,
ptetadmn,
ptetinvn,
ptetbatn
)
  tablespace pas_indx; 

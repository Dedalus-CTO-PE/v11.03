create table pmsladaf
(
  pmlavisn    varchar2(8) default ' ' not null,
  pmlaadat    varchar2(8) default ' ' not null,
  pmlaatim    varchar2(8) default ' ' not null,
  pmlafone    varchar2(1) default ' ' not null,
  pmlashop    varchar2(1) default ' ' not null,
  pmlafdpr    varchar2(1) default ' ' not null,
  pmlahkep    varchar2(1) default ' ' not null,
  pmlalaun    varchar2(1) default ' ' not null,
  pmlamtrn    varchar2(1) default ' ' not null,
  pmlarmed    varchar2(1) default ' ' not null,
  pmlafinc    varchar2(1) default ' ' not null,
  pmlacdat    varchar2(8) default ' ' not null,
  pmlactim    varchar2(8) default ' ' not null,
  pmlacuid    varchar2(10) default ' ' not null,
  pmlaudat    varchar2(8) default ' ' not null,
  pmlautim    varchar2(8) default ' ' not null,
  pmlauuid    varchar2(10) default ' ' not null,
  pmlaspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmslada1 primary key( 
pmlavisn,
pmlaadat,
pmlaatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

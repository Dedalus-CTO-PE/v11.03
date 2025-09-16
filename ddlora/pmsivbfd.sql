create table pmsivbaf
(
  pmivadmn    varchar2(8) default ' ' not null,
  pmivuniq    varchar2(10) default ' ' not null,
  pmivinvn    varchar2(8) default ' ' not null,
  pmivstat    varchar2(1) default ' ' not null,
  pmivcuid    varchar2(10) default ' ' not null,
  pmivcdat    varchar2(8) default ' ' not null,
  pmivctim    varchar2(8) default ' ' not null,
  pmivuuid    varchar2(10) default ' ' not null,
  pmivudat    varchar2(8) default ' ' not null,
  pmivutim    varchar2(8) default ' ' not null,
  pmivspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsivba1 primary key( 
pmivinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsivba2 on pmsivbaf
(
pmivadmn,
pmivuniq,
pmivinvn
)
  tablespace pas_indx; 
create unique index pmsivba3 on pmsivbaf
(
pmivuniq,
pmivinvn,
pmivadmn
)
  tablespace pas_indx; 

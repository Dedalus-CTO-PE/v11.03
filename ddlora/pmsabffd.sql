create table pmsabfaf
(
  pmabadmn    varchar2(8) default ' ' not null,
  pmabinvn    varchar2(8) default ' ' not null,
  pmabadjt    varchar2(3) default ' ' not null,
  pmabinvc    varchar2(1) default ' ' not null,
  pmababft    varchar2(1) default ' ' not null,
  pmabepsn    varchar2(2) default ' ' not null,
  pmabadrg    varchar2(20) default ' ' not null,
  pmabdrgd    varchar2(80) default ' ' not null,
  pmabadjv    number(14,4) default 0 not null,
  pmabcdes    varchar2(100) default ' ' not null,
  pmabimpr    varchar2(1) default ' ' not null,
  pmabcdat    varchar2(8) default ' ' not null,
  pmabctim    varchar2(8) default ' ' not null,
  pmabcuid    varchar2(10) default ' ' not null,
  pmabudat    varchar2(8) default ' ' not null,
  pmabutim    varchar2(8) default ' ' not null,
  pmabuuid    varchar2(10) default ' ' not null,
  pmabspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsabfa1 primary key( 
pmabadmn,
pmabinvn,
pmabadjt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsabfa2 on pmsabfaf
(
pmabinvn,
pmabadjt,
pmabadmn
)
  tablespace pas_indx; 
create unique index pmsabfa3 on pmsabfaf
(
pmabadmn,
pmabadjt,
pmabinvn
)
  tablespace pas_indx; 

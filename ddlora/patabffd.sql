create table patabfaf
(
  ptabadmn    varchar2(8) default ' ' not null,
  ptabenct    varchar2(8) default ' ' not null,
  ptabinvn    varchar2(8) default ' ' not null,
  ptabadjt    varchar2(3) default ' ' not null,
  ptabinvc    varchar2(1) default ' ' not null,
  ptababft    varchar2(1) default ' ' not null,
  ptabadjv    number(14,4) default 0 not null,
  ptabcdes    varchar2(100) default ' ' not null,
  ptabimpr    varchar2(1) default ' ' not null,
  ptabcdat    varchar2(8) default ' ' not null,
  ptabctim    varchar2(8) default ' ' not null,
  ptabcuid    varchar2(10) default ' ' not null,
  ptabudat    varchar2(8) default ' ' not null,
  ptabutim    varchar2(8) default ' ' not null,
  ptabuuid    varchar2(8) default ' ' not null,
  ptabspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patabfa1 primary key( 
ptabadmn,
ptabenct,
ptabinvn,
ptabadjt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patabfa2 on patabfaf
(
ptabadmn,
ptabenct,
ptabadjt,
ptabinvn
)
  tablespace pas_indx; 

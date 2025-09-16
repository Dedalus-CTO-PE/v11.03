create table patkcmaf
(
  ptcmitm     varchar2(9) default ' ' not null,
  ptcmkwd     varchar2(15) default ' ' not null,
  ptcmspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkcma1 primary key( 
ptcmitm,
ptcmkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkcma2 on patkcmaf
(
ptcmkwd,
ptcmitm
)
  tablespace pas_indx; 

create table patcmorf
(
  dcmadmno    varchar2(8) default ' ' not null,
  cmcdate     varchar2(8) default ' ' not null,
  cmnewflg    varchar2(1) default ' ' not null,
  cmspare     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmor1 primary key( 
dcmadmno,
cmcdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcmor2 on patcmorf
(
cmcdate,
dcmadmno
)
  tablespace pas_indx; 

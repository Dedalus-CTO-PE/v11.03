create table alltmpaf
(
  altmdept    varchar2(3) default ' ' not null,
  altmmpsv    varchar2(8) default ' ' not null,
  altmmprp    varchar2(2) default ' ' not null,
  altmmptp    varchar2(3) default ' ' not null,
  altmmptt    varchar2(3) default ' ' not null,
  altmdesc    varchar2(30) default ' ' not null,
  altmcdat    varchar2(8) default ' ' not null,
  altmctim    varchar2(8) default ' ' not null,
  altmcuid    varchar2(10) default ' ' not null,
  altmudat    varchar2(8) default ' ' not null,
  altmutim    varchar2(8) default ' ' not null,
  altmuuid    varchar2(10) default ' ' not null,
  altmtyrc    varchar2(1) default ' ' not null,
  altmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alltmpa1 primary key( 
altmdept,
altmmpsv,
altmmprp,
altmmptp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

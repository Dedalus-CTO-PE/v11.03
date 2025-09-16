create table alltmpaf
(
  altmdept    char(3) default ' ' not null,
  altmmpsv    char(8) default ' ' not null,
  altmmprp    char(2) default ' ' not null,
  altmmptp    char(3) default ' ' not null,
  altmmptt    char(3) default ' ' not null,
  altmdesc    char(30) default ' ' not null,
  altmcdat    char(8) default ' ' not null,
  altmctim    char(8) default ' ' not null,
  altmcuid    char(10) default ' ' not null,
  altmudat    char(8) default ' ' not null,
  altmutim    char(8) default ' ' not null,
  altmuuid    char(10) default ' ' not null,
  altmtyrc    char(1) default ' ' not null,
  altmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index alltmpa1 on alltmpaf
(
altmdept,
altmmpsv,
altmmprp,
altmmptp
);
revoke all on alltmpaf from public ; 
grant select on alltmpaf to public ; 

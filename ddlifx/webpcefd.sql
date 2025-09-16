create table webpceaf
(
  wbpestat    char(50) default ' ' not null,
  wbpeclid    char(22) default ' ' not null,
  wbpeccmn    char(10) default ' ' not null,
  wbpeccmr    char(1) default ' ' not null,
  wbpepcmn    char(10) default ' ' not null,
  wbpepcmr    char(1) default ' ' not null,
  wbpeecde    char(4) default ' ' not null,
  wbpeetxt    char(500) default ' ' not null,
  wbpetrid    char(24) default ' ' not null,
  wbpemsid    char(36) default ' ' not null,
  wbpespar    char(101) default ' ' not null,
  lf          char(1)
);
create unique index webpcea1 on webpceaf
(
wbpeclid,
wbpetrid
);
create unique index webpcea2 on webpceaf
(
wbpetrid,
wbpeclid
);
create unique index webpcea3 on webpceaf
(
wbpemsid,
wbpeclid
);
create unique index webpcea4 on webpceaf
(
wbpestat,
wbpeclid,
wbpetrid
);
revoke all on webpceaf from public ; 
grant select on webpceaf to public ; 

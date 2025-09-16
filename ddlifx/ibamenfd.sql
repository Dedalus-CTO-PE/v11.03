create table ibamenaf
(
  ibmnmenu    char(3) default ' ' not null,
  ibmndesc    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibamena1 on ibamenaf
(
ibmnmenu
);
revoke all on ibamenaf from public ; 
grant select on ibamenaf to public ; 

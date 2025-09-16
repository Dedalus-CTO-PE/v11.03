create table pmsxmlaf
(
  pmxmtype    char(3) default ' ' not null,
  pmxmxtag    char(80) default ' ' not null,
  pmxmxcgi    char(8) default ' ' not null,
  pmxmspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmsxmla1 on pmsxmlaf
(
pmxmtype,
pmxmxtag
);
create unique index pmsxmla2 on pmsxmlaf
(
pmxmtype,
pmxmxcgi,
pmxmxtag
);
revoke all on pmsxmlaf from public ; 
grant select on pmsxmlaf to public ; 

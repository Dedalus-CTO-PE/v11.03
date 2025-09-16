create table ibaalvaf
(
  ibavvisn    char(8) default ' ' not null,
  ibavavis    char(20) default ' ' not null,
  ibavtype    char(2) default ' ' not null,
  ibavspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index ibaalva1 on ibaalvaf
(
ibavvisn
);
create unique index ibaalva2 on ibaalvaf
(
ibavavis,
ibavvisn
);
revoke all on ibaalvaf from public ; 
grant select on ibaalvaf to public ; 

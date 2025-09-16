create table ibaphnaf
(
  ibphsnam    char(25) default ' ' not null,
  ibphgnam    char(30) default ' ' not null,
  ibphextn    char(6) default ' ' not null,
  ibphdept    char(3) default ' ' not null,
  ibphtitl    char(20) default ' ' not null,
  ibphpgnm    char(12) default ' ' not null,
  ibphpgcd    char(6) default ' ' not null,
  ibphcont    char(15) default ' ' not null,
  lf          char(1)
);
create unique index ibaphon1 on ibaphnaf
(
ibphsnam,
ibphgnam,
ibphextn
);
create unique index ibaphon2 on ibaphnaf
(
ibphdept,
ibphsnam,
ibphgnam,
ibphextn
);
create unique index ibaphon3 on ibaphnaf
(
ibphgnam,
ibphsnam,
ibphextn
);
create unique index ibaphon4 on ibaphnaf
(
ibphextn,
ibphsnam,
ibphgnam
);
create unique index ibaphon5 on ibaphnaf
(
ibphtitl,
ibphsnam,
ibphgnam,
ibphextn
);
revoke all on ibaphnaf from public ; 
grant select on ibaphnaf to public ; 

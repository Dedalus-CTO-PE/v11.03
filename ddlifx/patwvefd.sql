create table patwvetf
(
  dvadmno     char(8) default ' ' not null,
  vclmno      char(20) default ' ' not null,
  ptwvauth    char(20) default ' ' not null,
  ptwvdate    char(8) default ' ' not null,
  ptwvcont    char(50) default ' ' not null,
  ptwvtnum    char(20) default ' ' not null,
  vspare      char(50) default ' ' not null,
  lf          char(1)
);
create unique index patwvet1 on patwvetf
(
dvadmno
);
revoke all on patwvetf from public ; 
grant select on patwvetf to public ; 

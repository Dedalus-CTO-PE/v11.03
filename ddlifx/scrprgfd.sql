create table scrprgaf
(
  scprpid     char(8) default ' ' not null,
  scprnam     char(40) default ' ' not null,
  scprnat     char(40) default ' ' not null,
  scprcbf     char(8) default ' ' not null,
  scprcaf     char(8) default ' ' not null,
  scprisc     char(2) default ' ' not null,
  scprspa     char(22) default ' ' not null,
  lf          char(1)
);
create unique index scrprga1 on scrprgaf
(
scprpid
);
revoke all on scrprgaf from public ; 
grant select on scrprgaf to public ; 

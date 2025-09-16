create table ibaimenf
(
  ibimuser    char(4) default ' ' not null,
  ibimdate    char(8) default ' ' not null,
  ibimtime    char(8) default ' ' not null,
  ibimport    char(2) default ' ' not null,
  ibimprog    char(8) default ' ' not null,
  ibimspar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index ibaimen1 on ibaimenf
(
ibimuser,
ibimdate,
ibimtime,
ibimport
);
create unique index ibaimen2 on ibaimenf
(
ibimdate,
ibimtime,
ibimport
);
create unique index ibaimen3 on ibaimenf
(
ibimport,
ibimdate,
ibimtime
);
create unique index ibaimen4 on ibaimenf
(
ibimprog,
ibimdate,
ibimtime,
ibimport
);
revoke all on ibaimenf from public ; 
grant select on ibaimenf to public ; 

create table pmsrldaf
(
  pmrddoct    char(10) default ' ' not null,
  pmrdhosp    char(3) default ' ' not null,
  pmrdrole    char(3) default ' ' not null,
  pmrdactv    char(1) default ' ' not null,
  pmrdcuid    char(10) default ' ' not null,
  pmrdcdat    char(8) default ' ' not null,
  pmrdctim    char(8) default ' ' not null,
  pmrduuid    char(10) default ' ' not null,
  pmrdudat    char(8) default ' ' not null,
  pmrdutim    char(8) default ' ' not null,
  pmrdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsrlda1 on pmsrldaf
(
pmrddoct,
pmrdhosp,
pmrdrole
);
revoke all on pmsrldaf from public ; 
grant select on pmsrldaf to public ; 

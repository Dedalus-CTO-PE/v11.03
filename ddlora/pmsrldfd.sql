create table pmsrldaf
(
  pmrddoct    varchar2(10) default ' ' not null,
  pmrdhosp    varchar2(3) default ' ' not null,
  pmrdrole    varchar2(3) default ' ' not null,
  pmrdactv    varchar2(1) default ' ' not null,
  pmrdcuid    varchar2(10) default ' ' not null,
  pmrdcdat    varchar2(8) default ' ' not null,
  pmrdctim    varchar2(8) default ' ' not null,
  pmrduuid    varchar2(10) default ' ' not null,
  pmrdudat    varchar2(8) default ' ' not null,
  pmrdutim    varchar2(8) default ' ' not null,
  pmrdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsrlda1 primary key( 
pmrddoct,
pmrdhosp,
pmrdrole)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

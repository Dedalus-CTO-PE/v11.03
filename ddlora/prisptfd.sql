create table priaudsp
(
prspaudd    varchar2(8),
prspaudt    varchar2(8),
prspaudp    varchar2(2),
prspaudr    varchar2(1),
prspauds    number(1,0),
prspaudo    varchar2(4),
dprspflg    varchar2(2),
prspitm1    varchar2(9),
prspsub1    varchar2(3),
prspedat    varchar2(8),
prspitm2    varchar2(9),
prspsub2    varchar2(3),
prspitmn    varchar2(9),
prspsubn    varchar2(3),
prspspar    varchar2(20),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym priaudsp for priaudsp;
create index priaudsp on priaudsp
(
prspaudd,
prspaudt,
prspaudp,
prspaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table prisptaf
(
dprspflg    varchar2(2),
prspitm1    varchar2(9),
prspsub1    varchar2(3),
prspedat    varchar2(8),
prspitm2    varchar2(9),
prspsub2    varchar2(3),
prspitmn    varchar2(9),
prspsubn    varchar2(3),
prspspar    varchar2(20),
lf          varchar2(1),
constraint prispta1 primary key( 
dprspflg,
prspitm1,
prspsub1,
prspedat,
prspitm2,
prspsub2)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prisptaf for prisptaf;

create table pataudds
(
ptdsaudd    varchar2(8),
ptdsaudt    varchar2(8),
ptdsaudp    varchar2(2),
ptdsaudr    varchar2(1),
ptdsauds    number(1,0),
ptdsaudo    varchar2(4),
ptdscode    varchar2(3),
ptdsefdt    varchar2(8),
ptdseddt    varchar2(8),
ptdsdcod    varchar2(3),
ptdsspar    varchar2(10),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudds for pataudds;
create index pataudds on pataudds
(
ptdsaudd,
ptdsaudt,
ptdsaudp,
ptdsaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table patsdiaf
(
ptdscode    varchar2(3),
ptdsefdt    varchar2(8),
ptdseddt    varchar2(8),
ptdsdcod    varchar2(3),
ptdsspar    varchar2(10),
lf          varchar2(1),
constraint patsdia1 primary key( 
ptdscode,
ptdsefdt)
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
create public synonym patsdiaf for patsdiaf;
create unique index patsdia2 on patsdiaf
(
ptdsdcod,
ptdsefdt,
ptdscode
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

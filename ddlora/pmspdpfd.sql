create table pmspdpaf
(
pmpdadmn    varchar2(8),
pmpddate    varchar2(8),
pmpdshif    varchar2(1),
pmpdward    varchar2(3),
pmpdscor    number(3,0),
pmpdcate    varchar2(1),
pmpdclos    varchar2(1),
pmpdspar    varchar2(29),
lf          varchar2(1),
constraint pmspdpa1 primary key( 
pmpdadmn,
pmpddate,
pmpdshif)
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
create public synonym pmspdpaf for pmspdpaf;
create unique index pmspdpa2 on pmspdpaf
(
pmpdward,
pmpddate,
pmpdshif,
pmpdadmn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

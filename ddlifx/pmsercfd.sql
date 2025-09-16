create table pmsercaf
(
pmrcarid    char(20),
pmrcrptc    char(3),
pmrctype    char(3),
pmrcline    char(3),
pmrcdata    char(100),
pmrcudat    char(8),
pmrcutim    char(8),
pmrcspar    char(30),
lf          char(1)
);
create unique index pmserca1 on pmsercaf
(
pmrcarid,
pmrcrptc,
pmrctype,
pmrcline
);
revoke all on pmsercaf from public ; 
grant select on pmsercaf to public ; 

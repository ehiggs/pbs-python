/*
 * $Id$
 *
*         Portable Batch System (PBS) Software License
* 
* Copyright (c) 1999, MRJ Technology Solutions.
* All rights reserved.
* 
* Acknowledgment: The Portable Batch System Software was originally developed
* as a joint project between the Numerical Aerospace Simulation (NAS) Systems
* Division of NASA Ames Research Center and the National Energy Research
* Supercomputer Center (NERSC) of Lawrence Livermore National Laboratory.
* 
* Redistribution of the Portable Batch System Software and use in source
* and binary forms, with or without modification, are permitted provided
* that the following conditions are met:
* 
* - Redistributions of source code must retain the above copyright and
*   acknowledgment notices, this list of conditions and the following
*   disclaimer.
* 
* - Redistributions in binary form must reproduce the above copyright and 
*   acknowledgment notices, this list of conditions and the following
*   disclaimer in the documentation and/or other materials provided with the
*   distribution.
* 
* - All advertising materials mentioning features or use of this software must
*   display the following acknowledgment:
* 
*   This product includes software developed by NASA Ames Research Center,
*   Lawrence Livermore National Laboratory, and MRJ Technology Solutions.
* 
*         DISCLAIMER OF WARRANTY
* 
* THIS SOFTWARE IS PROVIDED BY MRJ TECHNOLOGY SOLUTIONS ("MRJ") "AS IS" WITHOUT 
* WARRANTY OF ANY KIND, AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
* BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
* FOR A PARTICULAR PURPOSE, AND NON-INFRINGEMENT ARE EXPRESSLY DISCLAIMED.
* 
* IN NO EVENT, UNLESS REQUIRED BY APPLICABLE LAW, SHALL MRJ, NASA, NOR
* THE U.S. GOVERNMENT BE LIABLE FOR ANY DIRECT DAMAGES WHATSOEVER,
* NOR ANY INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
* USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* 
* This license will be governed by the laws of the Commonwealth of Virginia,
* without reference to its choice of law rules.
*/

/*
 * @(#) $Id$
 */

/*    
 *
 *  pbs_ifl.h   
 *
 */

/*
 *  Changed by: Bas van der Vlies <basv@sara.nl>. 
 *  Desc.     : removed the macro definitions so that SWIG can understand 
 *              the header file syntax
*/

#ifndef _PBS_IFL_DEF
#define _PBS_IFL_DEF

/* Attribute Names used by user commands */

#define ATTR_a "Execution_Time"
#define ATTR_c "Checkpoint"
#define ATTR_e "Error_Path"
#define ATTR_g	"group_list"
#define ATTR_h "Hold_Types"
#define ATTR_j "Join_Path"
#define ATTR_k "Keep_Files"
#define ATTR_l "Resource_List"
#define ATTR_m "Mail_Points"
#define ATTR_o "Output_Path"
#define ATTR_p "Priority"
#define ATTR_q "destination"
#define ATTR_r "Rerunable"
#define ATTR_u "User_List"
#define ATTR_v "Variable_List"
#define ATTR_A "Account_Name"
#define ATTR_M "Mail_Users"
#define ATTR_N "Job_Name"
#define ATTR_S "Shell_Path_List"
#define ATTR_depend   "depend"
#define ATTR_inter    "interactive"
#define ATTR_stagein  "stagein"
#define ATTR_stageout "stageout"

/* additional job and general attribute names */

#define ATTR_ctime	"ctime"
#define ATTR_exechost	"exec_host"
#define ATTR_mtime	"mtime"
#define ATTR_qtime	"qtime"
#define ATTR_session	"session_id"
#define ATTR_euser	"euser"
#define ATTR_egroup	"egroup"
#define ATTR_hashname	"hashname"
#define ATTR_hopcount	"hop_count"
#define ATTR_security	"security"
#define ATTR_sched_hint	"sched_hint"
#define ATTR_substate	"substate"
#define ATTR_name	"Job_Name"
#define ATTR_owner	"Job_Owner"
#define ATTR_used	"resources_used"
#define ATTR_state	"job_state"
#define ATTR_queue	"queue"
#define ATTR_server	"server"
#define ATTR_maxrun	"max_running"
#define ATTR_total	"total_jobs"
#define ATTR_comment	"comment"
#define ATTR_cookie	"cookie"
#define ATTR_qrank	"queue_rank"
#define ATTR_altid	"alt_id"
#define ATTR_etime	"etime"

/* additional queue attributes names */

#define ATTR_aclgren	"acl_group_enable"
#define ATTR_aclgroup	"acl_groups"
#define ATTR_aclhten	"acl_host_enable"
#define ATTR_aclhost	"acl_hosts"
#define ATTR_acluren	"acl_user_enable"
#define ATTR_acluser	"acl_users"
#define ATTR_altrouter	"alt_router"
#define ATTR_chkptmin	"checkpoint_min"
#define ATTR_enable	"enabled"
#define ATTR_fromroute	"from_route_only"
#define ATTR_killdelay	"kill_delay"
#define ATTR_maxgrprun  "max_group_run"
#define ATTR_maxque	"max_queuable"
#define ATTR_maxuserrun "max_user_run"
#define ATTR_qtype	"queue_type"
#define ATTR_rescassn	"resources_assigned"
#define ATTR_rescdflt	"resources_default"
#define ATTR_rescmax	"resources_max"
#define ATTR_rescmin	"resources_min"
#define ATTR_rndzretry  "rendezvous_retry"
#define ATTR_routedest	"route_destinations"
#define ATTR_routeheld	"route_held_jobs"
#define ATTR_routewait	"route_waiting_jobs"
#define ATTR_routeretry	"route_retry_time"
#define ATTR_routelife	"route_lifetime"
#define ATTR_rsvexpdt   "reserved_expedite"
#define ATTR_rsvsync    "reserved_sync"
#define ATTR_start	"started"
#define ATTR_count	"state_count"
#define ATTR_number	"number_jobs"

/* HvB
 * Used by fifo_improv.patch
*/
#define ATTR_reqprop    "required_property"

/* additional server attributes names */

#define ATTR_aclroot	"acl_roots"
#define ATTR_managers	"managers"
#define ATTR_dfltque	"default_queue"
#define ATTR_defnode	"default_node"
#define ATTR_locsvrs	"location_servers"
#define ATTR_logevents	"log_events"
#define ATTR_logfile	"log_file"
#define ATTR_mailfrom	"mail_from"
#define ATTR_nodepack	"node_pack"
#define ATTR_operators	"operators"
#define ATTR_queryother	"query_other_jobs"
#define ATTR_resccost	"resources_cost"
#define ATTR_rescavail	"resources_available"
#define ATTR_schedit	"scheduler_iteration"
#define ATTR_scheduling	"scheduling"
#define ATTR_status	"server_state"
#define ATTR_syscost	"system_cost"

/* HvB
 * Used by SPBS 
*/
#define ATTR_pingrate	"node_ping_rate"
#define ATTR_ndchkrate	"node_check_rate"

/* HvB
 * Used by fifo_improv.patch
*/
#define ATTR_procpack	"proc_pack"


/* additional node "attributes" names */

#define ATTR_NODE_state		"state"
#define ATTR_NODE_np		"np"
#define ATTR_NODE_properties	"properties"
#define ATTR_NODE_ntype         "ntype"
#define ATTR_NODE_jobs          "jobs"

/* various attribute values */

#define CHECKPOINT_UNSPECIFIED "u"
#define NO_HOLD "n"
#define NO_JOIN	"n"
#define NO_KEEP "n"
#define MAIL_AT_ABORT "a"


#define DELDELAY  "deldelay="	/* see qdel.c */
#define USER_HOLD "u"
#define OTHER_HOLD "o"
#define SYSTEM_HOLD "s"

/* node-attribute values (state,ntype) */

#define	ND_free			"free"
#define ND_offline		"offline"
#define ND_down			"down"
#define ND_reserve		"reserve"
#define ND_job_exclusive	"job-exclusive"
#define ND_job_sharing		"job-sharing"
#define ND_busy			"busy"
#define ND_state_unknown	"state-unknown"
#define ND_timeshared		"time-shared"
#define ND_cluster		"cluster"

/*constant related to sum of string lengths for above strings*/
#define	MAX_ENCODE_BFR		100

#define MGR_CMD_CREATE	0
#define MGR_CMD_DELETE	1
#define MGR_CMD_SET	2
#define MGR_CMD_UNSET	3
#define MGR_CMD_LIST	4
#define MGR_CMD_PRINT	5
#define MGR_CMD_ACTIVE	6

#define MGR_OBJ_NONE	-1
#define MGR_OBJ_SERVER  0
#define MGR_OBJ_QUEUE   1
#define MGR_OBJ_JOB	2
#define MGR_OBJ_NODE	3

/* Misc defines for various requests */

#define MSG_OUT 1
#define MSG_ERR 2

#define SHUT_SIG	-1
#define SHUT_IMMEDIATE	0
#define SHUT_DELAY	1
#define SHUT_QUICK	2

#define SIG_RESUME	"resume"
#define SIG_SUSPEND	"suspend"

#define PBS_MAXHOSTNAME		64	/* max host name length */
#ifndef MAXPATHLEN
#define MAXPATHLEN		1024	/* max path name length */
#endif
#ifndef MAXNAMLEN
#define MAXNAMLEN		255
#endif

#define PBS_MAXUSER		16	/* max user name length */
#define PBS_MAXGRPN		16	/* max group name length */
#define PBS_MAXQUEUENAME	15	/* max queue name length */
#define PBS_MAXSERVERNAME	PBS_MAXHOSTNAME	/* max server name length */
#define PBS_MAXSEQNUM		6	/* max sequence number length */
#define PBS_MAXPORTNUM		5	/* udp/tcp port numbers max=16 bits */
#define PBS_MAXSVRJOBID		(PBS_MAXSEQNUM + PBS_MAXSERVERNAME + PBS_MAXPORTNUM + 2) /* server job id size */
#define PBS_MAXCLTJOBID		(PBS_MAXSVRJOBID + PBS_MAXSERVERNAME + PBS_MAXPORTNUM + 2) /* client job id size */

/* HvB
 * SPBS change used to be 256
*/
#define PBS_MAXDEST           1024	/* destination size -- increased from 256*/

#define PBS_MAXROUTEDEST	(PBS_MAXQUEUENAME + PBS_MAXSERVERNAME + PBS_MAXPORTNUM + 2) /* destination size */
#define PBS_USE_IFF		1	/* pbs_connect() to call pbs_iff */
#define PBS_INTERACTIVE		1	/* Support of Interactive jobs */
#define PBS_TERM_BUF_SZ		80	/* Interactive term buffer size */
#define PBS_TERM_CCA		6	/* Interactive term cntl char array */


/* someday the PBS_*_PORT definition will go away and only the	*/
/* PBS_*_SERVICE_NAME form will be used, maybe			*/

#define PBS_BATCH_SERVICE_NAME		"pbs"
#define PBS_BATCH_SERVICE_PORT		15001
#define PBS_BATCH_SERVICE_NAME_DIS	"pbs_dis"	/* new DIS port   */
#define PBS_BATCH_SERVICE_PORT_DIS	15001		/* new DIS port   */
#define PBS_MOM_SERVICE_NAME		"pbs_mom"
#define PBS_MOM_SERVICE_PORT		15002
#define PBS_MANAGER_SERVICE_NAME	"pbs_resmon"
#define PBS_MANAGER_SERVICE_PORT	15003
#define PBS_SCHEDULER_SERVICE_NAME	"pbs_sched"
#define PBS_SCHEDULER_SERVICE_PORT	15004

enum batch_op {	SET, UNSET, INCR, DECR,
		EQ, NE, GE, GT, LE, LT, DFLT
};

/*
** This structure is identical to attropl so they can be used
** interchangably.  The op field is not used.
*/
struct attrl {
	struct attrl *next;
	char	     *name;
	char	     *resource;
	char	     *value;
	enum batch_op 	 op;	/* not used */
};

struct attropl {
	struct attropl	*next;
	char		*name;
	char		*resource;
	char		*value;
	enum batch_op 	 op;
};

struct batch_status {
	struct batch_status *next;
	char		    *name;
	struct attrl	    *attribs;
	char		    *text;
};

/* Resource Reservation Information */
typedef int	resource_t;	/* resource reservation handle */

#define RESOURCE_T_NULL		(resource_t)0
#define RESOURCE_T_ALL		(resource_t)-1

extern int
pbs_errno;		/* error number */

extern char *
pbs_server;		/* server attempted to connect | connected to */
			/* see pbs_connect(3B)			      */

extern char avail(int connect, char *resc);

extern int pbs_asyrunjob(int c, char *jobid, char *location, char *extend);

extern int pbs_alterjob(int connect, char *job_id, struct attrl *attrib, 
		        char *extend);

extern int pbs_connect(char *server);

extern int pbs_query_max_connections();

extern char * pbs_default(void);

extern int pbs_deljob(int connect, char *job_id, char *extend);

extern int pbs_disconnect(int connect);

extern char * pbs_geterrmsg(int connect);

extern int pbs_holdjob(int connect, char *job_id, char *hold_type, 
		       char *extend);

extern char * pbs_locjob(int connect, char *job_id, char *extend);

extern int pbs_manager(int connect, int command, int obj_type, char *obj_name,
	struct attropl *attrib, char *extend);
	
extern int pbs_movejob(int connect, char *job_id, char *destination, 
		       char *extend);
	
extern int pbs_msgjob(int connect, char *job_id, int file, char *message, 
	char *extend);

extern int pbs_orderjob (int connect, char *job1, char *job2, char *extend);

extern int pbs_rescquery(int connect, char **rlist, int nresc, int *avail,
	int *alloc, int *resv, int *down);

extern int pbs_rescreserve(int connect, char **rlist, int nresc, resource_t *phandle);

extern int pbs_rescrelease(int connect, resource_t rhandle);

extern int pbs_rerunjob(int connect, char *job_id, char *extend);

extern int pbs_rlsjob(int connect, char *job_id, char *hold_type, char *extend);

extern int pbs_runjob(int connect, char *jobid, char *loc, char *extend);

extern char **pbs_selectjob(int connect, struct attropl *select_list, char *extend);

extern int pbs_sigjob(int connect, char *job_id, char *signal, char *extend);

extern void pbs_statfree(struct batch_status *stat);

// Function does not exitst Bas van der Vlies
// 
// extern struct batch_status *pbs_statdest(int connect, char *id, char *extend);

extern struct batch_status *pbs_statjob(int connect, char *id, struct attrl *attrib, char *extend);

extern struct batch_status *pbs_selstat(int connect, struct attropl *select_list, char *extend);

extern struct batch_status *pbs_statque(int connect, char *id, struct attrl *attrib, char *extend); 

extern struct batch_status *pbs_statserver(int connect, struct attrl *attrib, char *extend);

extern struct batch_status *pbs_statnode(int connect, char *id, struct attrl *attrib, char *extend);

extern char *pbs_submit(int connect, struct attropl *attrib, char *script,
	char *destination, char *extend);
	
extern int pbs_terminate(int connect, int manner, char *extend);

extern int totpool(int connect, int update);

extern int usepool(int connect, int update);

#endif	/* _PBS_IFL_DEF */

/*  end of pbs_ifl.h  */

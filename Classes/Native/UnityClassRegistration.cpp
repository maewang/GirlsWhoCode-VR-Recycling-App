struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 89 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//32. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//33. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//34. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//35. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//36. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//37. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//38. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//39. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//40. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//41. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//42. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//43. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//44. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//45. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//46. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//47. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//48. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//49. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//50. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//51. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//52. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//53. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//54. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//55. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//56. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//57. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//58. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//59. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//60. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//61. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//65. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//66. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//67. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//68. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//69. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//70. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//71. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//72. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//73. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//74. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//75. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//76. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//77. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//78. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//79. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//80. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//81. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//82. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//83. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//84. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//85. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//86. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//87. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//88. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
